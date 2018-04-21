type routes =
    | Home
    | UserList
    | UserDetail(string)
    | NotFound;

let routeToString = (route) => {
    switch(route) {
    | Home => "/"
    | UserList => "/users/"
    | UserDetail(id) => "/users/" ++ id
    | NotFound => "/not_found"
    };
};

let routeToReact = (route) => {
    switch(route) {
    | Home => <Home />
    | UserList => <IndexUser />
    | UserDetail(_) => <IndexUser />
    | NotFound => <Home /> /* Temporary */
    };
};

let urlToRoute = (url : ReasonReact.Router.url) => {
    switch(url.path) {
    | [] => Home
    | ["users"] => UserList
    | ["users", id] => UserDetail(id)
    | _ => NotFound
    };
};
