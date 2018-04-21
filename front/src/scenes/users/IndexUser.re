let component = ReasonReact.statelessComponent("IndexUser");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="Users">
      <p className="Users-message">
        (ReasonReact.stringToElement("This is the user page !"))
        <code> (ReasonReact.stringToElement(" src/scenes/users/IndexUser.re ")) </code>
      </p>
    </div>
};
