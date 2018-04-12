module Web::Controllers::Sessions
  class Create
    include Web::Action

    def call(params)
      user = UserRepository.new.for_email(requested_email)
      if !user.nil? && password_correct?(user)
        session[:user_id] = user.id
        redirect_to routes.root_path
      else
        redirect_to routes.new_session_path
      end
    end

    private

    def password_correct?(user)
      BCrypt::Password.new(user.encrypted_password) == requested_password
    end

    def requested_email
      params[:session][:email]
    end

    def requested_password
      params[:session][:password]
    end
  end
end
