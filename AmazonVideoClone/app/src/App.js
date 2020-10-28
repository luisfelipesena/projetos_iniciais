import React from "react";
import "./App.css";

function App() {
  const [filmesASeguir, setASeguir] = React.useState([]);
  const [filmesRecomendados, setRecomendados] = React.useState([]);
  const [pesquisaInput, setPesquisaInput] = React.useState(null);

  React.useEffect(() => {
    fetch("https://imdb-api.com/en/API/MostPopularMovies/k_zdh9dhch")
      .then((res) => res.json())
      .then((dados) => {
        const filmes = dados.items;
        const tempFilmes = [];
        for (let i = 0; i < filmes.length; i++) {
          tempFilmes.push(filmes[i]);
        }

        if (pesquisaInput) {
          const tempPesquisa = [];
          tempFilmes.forEach((filme) => {
            if (filme.title.includes(pesquisaInput)) {
              tempPesquisa.push(filme);
            }
          });
          setASeguir(tempPesquisa);
          return;
        }
        setASeguir(tempFilmes.slice(0, 10));
        setRecomendados(tempFilmes.slice(10));
      });
  }, [pesquisaInput]);

  return (
    <div className="App">
      <div className="header">
        <div className="esquerda">
          <a href="app.js">
            <img
              src="https://img01.products.bt.co.uk/content/dam/bt/portal/images/logos/tv/Amazon-Prime-logo-FULL-white.png"
              alt="Logo Amazon"
            ></img>
          </a>
          <ul>
            <li>Início</li>
            <li>Séries</li>
            <li>Filmes</li>
            <li>Infantil</li>
            <li>Canais</li>
          </ul>
        </div>

        <div className="direita">
          <div className="input">
            <input
              placeholder="Busca"
              onChange={(ev) => {
                const input = ev.target.value;
                if (input === "") {
                  setPesquisaInput(null);
                } else {
                  setPesquisaInput(ev.target.value);
                }
              }}
            />
            <img
              src="https://cdn.onlinewebfonts.com/svg/img_174312.png"
              alt="Lupa"
            ></img>
          </div>
          <img
            src="https://www.elsevier.com/__data/assets/image/0016/102247/pure-icon-profile.png"
            alt="Usuário"
          ></img>
          <span>Luis Felipe</span>
        </div>
      </div>

      <div className="main">
        <div className="poster">
          <button>
            <img
              src="https://systemuicons.com/images/icons/chevron_left.svg"
              alt="seta esquerda"
            ></img>
          </button>
          <img
            src="https://m.media-amazon.com/images/G/01/digital/video/sonata/CROW_BR_Paramount_MultiTitle_Sep20/79ffc91d-654c-425d-b9cd-fd0f036a4f48._UR3000,600_SX1500_FMwebp_.jpg"
            //    https://m.media-amazon.com/images/G/01/digital/video/sonata/SVOD_ROW_SH_Halloween_2020/ea216c4f-de97-4bd4-a859-fd9a13374b91._UR3000,600_SX1500_FMwebp_.jpg
            alt="poster"
          ></img>
          <button>
            <img
              src="https://systemuicons.com/images/icons/chevron_right.svg"
              alt="seta direita"
            ></img>
          </button>
        </div>

        <div className="filmes">
          <h3>Assista a seguir</h3>

          <div className="aSeguir">
            <ul>
              {filmesASeguir.length === 0 ? (
                <li>Carregando</li>
              ) : (
                filmesASeguir.map((filme) => (
                  <li key={filme.id}>
                    <img alt={filme.title} src={filme.image}></img>
                    <div>
                      {filme.title.length >= 15
                        ? `${filme.title.slice(0, 15)}...`
                        : filme.title}
                    </div>
                  </li>
                ))
              )}
            </ul>
          </div>
          <h3>
            <img
              className="logoPrime"
              alt="logo prime"
              src="https://seeklogo.com/images/A/amazon-prime-icon-logo-484A50E84F-seeklogo.com.png"
            ></img>
            <span>Recomendados</span>
          </h3>
          <div className="primeRecomendados">
            <ul>
              {filmesRecomendados.length === 0 ? (
                <li>"Carregando"</li>
              ) : (
                filmesRecomendados.map((filme) => (
                  <li key={filme.id}>
                    <img alt={filme.title} src={filme.image}></img>
                    <div>
                      {filme.title.length >= 15
                        ? `${filme.title.slice(0, 15)}...`
                        : filme.title}
                    </div>
                  </li>
                ))
              )}
            </ul>
          </div>
        </div>
      </div>
    </div>
  );
}

export default App;
