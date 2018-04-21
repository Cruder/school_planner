let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="Home">
      <p className="Home-intro">
        (ReasonReact.stringToElement("This is the main page ! 2"))
        <code> (ReasonReact.stringToElement(" src/scenes/home/Home.re ")) </code>
      </p>
    </div>
};
