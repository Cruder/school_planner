class UserRepository < Hanami::Repository
  def for_email(e)
    users.where { email.is(e) }.limit(1).one
  end
end
