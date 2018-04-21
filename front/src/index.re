[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

let initComponent = Router.routeToReact(Router.urlToRoute(ReasonReact.Router.dangerouslyGetInitialUrl()));
ReactDOMRe.renderToElementWithId(initComponent, "root");

register_service_worker();
