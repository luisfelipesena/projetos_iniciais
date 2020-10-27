import logo from "./logo.svg";
import "./App.css";

function App() {
  return (
    <div className="App">
      <div className="header">
        <div className="esquerda">
          <a href="app.js">
            <img
              src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/11/Amazon_Prime_Video_logo.svg/1200px-Amazon_Prime_Video_logo.svg.png"
              alt="Logo Amazon"
            ></img>
          </a>
        </div>
        <div className="direita">
          <div className="input">
            <img
              src="https://cdn1.iconfinder.com/data/icons/action-states-vol-2/48/JD-01-512.png"
              alt="Lupa"
            ></img>
            <input />
          </div>
          <img
            src="https://www.elsevier.com/__data/assets/image/0016/102247/pure-icon-profile.png"
            alt="Usuário"
          ></img>
          <span>Luis Felipe</span>
        </div>
      </div>
    </div>
  );
}

export default App;
