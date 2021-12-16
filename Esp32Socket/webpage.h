//=====================
//HTML code for webpage
//=====================
const char webpageCont[] PROGMEM =
R"=====(
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>IRRIGAÇÃO</title>
    <style>
#cabecalho td{
    background-color: #bdf0ff;
    padding: 5px 5px;
    height: 150%;
    max-width: min-content;
    font-size: calc(1vw + 5px);
}

#containerButton{
    display: flex;
    justify-content: space-between;
    position: absolute;
    width: 96%;
    left: 2%;
    bottom:10px;
    align-self: start;
    /*background-color: blueviolet;*/
}

option{
    background-color: #00000036;
}

#containerButton *{
    color: white;
    font-size: 30px;
    width: 50px;
    height: 50px;
    border-radius: 50%;
    margin: 5px;
}


#containerButton #envioForm{
    background-image: linear-gradient(to bottom right, #00ff00 50%, #00db00 50%);
    font-weight: bold;
}

#containerButton #cancel{
    background-image: linear-gradient(to bottom right, red  50%, #c70000  50%);
}

table{
    position: relative;
    margin: 10px;
    justify-content: center;
    background-color: #fff;
    align-items: center;
    border-collapse: collapse;
    font-family: 'Trebuchet MS';
    width: 90%;
    max-width: 1500px;
}

td{
    border: 2px solid rgb(114, 114, 114);
    text-align-last: center;
    align-items: center;
    justify-content: center;
    height: 50px;
    width: min-content;
    max-width: 15em;
    padding: -20px;
    width: min-content;
}

.container{
    display: flex;
    min-width: calc(90% + 70px);
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

#conteiner_relogio{
    height: min-content;
    width: 100%;
}

.umidade, .estadoBomba input + div
{font-size: calc(2.7vw + 10px);
    padding: 0px 4px;}

.titulo, input[type="time"], select{
    font-size: calc(2.6vw + 5px);
    white-space: nowrap;
    text-overflow: ellipsis;
    overflow: hidden !important;
}

body{
    display: flex;
    flex-direction: column;
    align-items: center;
    background-attachment: fixed;
    text-align-last: center;
    background-image: linear-gradient(#daf6ff 85%, #afffa1);
    min-height: 90%;
    justify-content: center;
    cursor: context-menu;
    border:3px double #afffa107;
}

h1{
    display: flex;
    flex-direction: row;
    justify-content: center;
    align-items: end;
    color: darkcyan;
    font-size: calc(2.3vw + 7px);
    font-family: cursive;
    margin-top: -5px;
}

h1 span{
    color: darkblue;
    font-size: calc(2.3vw + 12px);
    font-family: Verdana;
    margin-bottom: 10px;
    margin-right: 10px;
}

h1 div{
    display: flex;
    align-items: center;
    margin: 5px;
    color: #19d700;
    margin-bottom: 12px;
}

.gg-drop-invert {
    box-sizing: border-box;
    position: absolute;
    display: block;
    transform: rotate(70deg) scale(var(--ggs,1));
    width: calc(2vw + 10px);
    height: calc(2vw + 10px);
    max-width: 32px;
    max-height: 32px;
    border-radius: 0px 100% 100% 100%;
    box-shadow: inset 0 0 0 5px;
    overflow: hidden
}
.gg-drop-invert::before {
    content: "";
    display: block;
    position: absolute;
    box-sizing: border-box;
    width: calc(1.4vw + 10px);
    height: calc(1.5vw + 10px);
    background: currentColor;
    transform: rotate(-65deg);
    border-radius: 50px 30px;
    right: 0px;
    top: -5px;
}

#estadoIrrigar{
    width: 100%;
    height: 100%;
    background-color: #ced2ff;
    padding: 0px;
}

select{height: 60px}

input[type="checkbox"]{display: none}

input[type="time"]{
    border: none;
    appearance: auto;
    width: 100%;
    height: 100%;
    padding: 2px 2px;
    cursor: text;
    background-color: #ffffff00;
}

input[type="time"]:hover{background-color: #bfbfbf50}

.estadoBomba input + div{
    display: flex;
    padding: 0px 4px;
    background-color: #c2c2c2;
    height: 100%;
    justify-content: center;
    align-items: center;
    cursor: pointer;
}

.estadoBomba input:checked + div{background-color: #09ff00}

.estadoBomba input + div:hover{background-color: #afafaf}

.estadoBomba input + div::after{content: "OFF"}

.estadoBomba input:checked + div:hover{background-color: #51ff4b}

.estadoBomba input:checked + div::after{content: "ON"}

@media screen and (min-width:600px){
    .dom::after{content: "OM"}
    .seg::after{content: "EG"}
    .ter::after{content: "ER"}
    .qua::after{content: "UA"}
    .qui::after{content: "UI"}
    .sex::after{content: "EX"}
    .sab::after{content: "AB"}
}

.semana label input + div{
    display: flex;
    justify-content: center;
    align-items: center;
    background-color: #dddddd;
    font-size: calc(1vw + 5px);
    height: min-content;
    max-height: 18px;
    border: 1px solid;
    margin: 0px calc(0.1vw + 0.5px);
    padding: 4% calc(0.5vw);
}

.semana label input + div:hover{background-color: #d0d0d0}

.semana label input:checked + div{
    font-weight: bold;
    background-color: #ffe600;
}

.semana{
    /*background-color: darkgoldenrod;*/
    display: flex;
    justify-content: space-around;
    height: max-content;
    width: min-content;
    align-items: center;
    margin: 1px 0px;
   
}

.DATA{

    display: flex;
    height: 80%; /*78px;*/
    width: 100%;
    position: relative;
    flex-direction: column;
    align-items: center;
    justify-content: space-around;
}

.DATA:hover{
    background-color: #fbff0018;
}

.irrigar{
    display: flex;
    width: 100%;
}

.relogio{
    display: flex;
    border: 1px solid;
    align-items: end;
    flex-direction: row;
    font-family: monospace ;
    font-weight: bold;
    padding: 3px 3px;
    background-color: #fff;
    margin: 10px;
    margin-top: 30px;
    margin-bottom: 30px;
    float: right;
}

.relogio div span{
    font-size: calc( 1vw + 10px);
    background-color: #ffff00;
    border: 1px solid;
    padding: 5px 10px;
    margin: 3px;
}

.relogio div{display: flex}

td span:hover{background-color: #00000003}

.titulo:hover{background-color: #53535314}

.titulo + div{
    display: flex;
    opacity: 0;
    position:absolute;
    font-size: 0px;
    left: 470px;
    background-color: #fff67ce6;
    border: solid 0px;
    padding: 0px;
}

table input{
    border: none;
    width: 100%;
    height: 100%;
}
    </style>
</head>
<body onselectstart="return false">
    <div class="container">
        <h1><span>Grendene</span>IRRIGAÇÃO 4.0<div><i class="gg-drop-invert"></i></div></h1>
       
        <button onclick="fanONOFF()">log</button><div id="farofa">f</div>
        <TABLE>
            <tr id="cabecalho">
                <td>LOCAL</td>
                <td>MINUTOS</td>
                <td>HORARIO</td>
                <td>DIA</td>
                <td>UMIDADE</td>
                <td>IRRIGAR</td>
            </tr>
            <tr>
                <td class="titulo">Fab 01</td>
                <td><select name="du1" id="duracao1" style="width: 100%; height: 100%; border: none;">
                    <option value="5">5:00</option>
                    <option value="10">10:00</option>
                    <option value="15">15:00</option>
                    <option value="20">20:00</option>
                    <option value="25">25:00</option>
                </select></td>
                <td><input type="time" name="hora1" id="timeSemana1"></div></td>
                <td>
                    <div  class="DATA">
                        <div  class="semana">
                            <label>
                                <input type="checkbox"  id="S1_0" class="S1" name="S1">
                                <div class="dom">D</div>
                            </label>
                            <label>
                                <input type="checkbox"  id="S1_1" class="S1" name="S1">
                                <div class="seg">S</div>
                            </label>
                            <label>
                                <input type="checkbox"  id="S1_2" class="S1" name="S1">
                                <div class="ter">T</div>
                            </label>
                            <label>
                                <input type="checkbox"  id="S1_3" class="S1" name="S1">
                                <div class="qua">Q</div>
                            </label>
                        </div>
                        <div  class="semana">
                            <label>
                                <input type="checkbox"  id="S1_4" class="S1" name="S1">
                                <div class="qui">Q</div>
                            </label><label>
                                <input type="checkbox"  id="S1_5" class="S1" name="S1">
                                <div class="sex">S</div>
                            </label><label>
                                <input type="checkbox"  id="S1_6" class="S1" name="S1">
                                <div class="sab">S</div>
                            </label>
                        </div>
                    </div></div>
                </td>
                <td><span class="umidade" id="umidade1">0.69%</span></div></td>
                <td><label class="estadoBomba">
                    <input type="checkbox" id="bomba1"><div></div>
                </label></td>
            </tr>
            <tr>
                <td class="titulo"><div>Fab 02</div></td>
                <td><select name="du2" id="" style="width: 100%; height: 100%; border: none;">
                    <option value="5">5:00</option>
                    <option value="10">10:00</option>
                    <option value="15">15:00</option>
                    <option value="20">20:00</option>
                    <option value="25">25:00</option>
                </select></td>
                <td><input type="time" name="hora2" id="timeSemana2"></td>
                <td><div  class="DATA">
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="0" class="S2" name="S2">
                            <div class="dom">D</div>
                        </label>
                        <label>
                            <input type="checkbox" value="1" class="S2" name="S2">
                            <div class="seg">S</div>
                        </label>
                        <label>
                            <input type="checkbox" value="2" class="S2" name="S2">
                            <div class="ter">T</div>
                        </label>
                        <label>
                            <input type="checkbox" value="3" class="S2" name="S2">
                            <div class="qua">Q</div>
                        </label>
                    </div>
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="4" class="S2" name="S2">
                            <div class="qui">Q</div>
                        </label><label>
                            <input type="checkbox" value="5" class="S2" name="S2">
                            <div class="sex">S</div>
                        </label><label>
                            <input type="checkbox" value="6" class="S2" name="S2">
                            <div class="sab">S</div>
                        </label>
                    </div>
                </div></td>
                <td><span class="umidade">0.75%</span></td>
                <td><label class="estadoBomba">
                    <input type="checkbox" id="bomba2"><div></div>
                </label></td>
            </tr>
            <tr>
                <td class="titulo"><div>Fab 03</div></td>
                <td><select name="du3" id="" style="width: 100%; height: 100%; border: none;">
                    <option value="5">5:00</option>
                    <option value="10">10:00</option>
                    <option value="15">15:00</option>
                    <option value="20">20:00</option>
                    <option value="25">25:00</option>
                </select></td>
                <td><input type="time" name="hora3" id="timeSemana3"></td>
                <td><div  class="DATA">
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="0" class="S3" name="S3">
                            <div class="dom">D</div>
                        </label>
                        <label>
                            <input type="checkbox" value="1" class="S3" name="S3">
                            <div class="seg">S</div>
                        </label>
                        <label>
                            <input type="checkbox" value="2" class="S3" name="S3">
                            <div class="ter">T</div>
                        </label>
                        <label>
                            <input type="checkbox" value="3" class="S3" name="S3">
                            <div class="qua">Q</div>
                        </label>
                    </div>
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="4" class="S3" name="S3">
                            <div class="qui">Q</div>
                        </label><label>
                            <input type="checkbox" value="5" class="S3" name="S3">
                            <div class="sex">S</div>
                        </label><label>
                            <input type="checkbox" value="6" class="S3" name="S3">
                            <div class="sab">S</div>
                        </label>
                    </div>
                </div></td>
                <td><span class="umidade">0.73%</span></td>
                <td><label class="estadoBomba">
                    <input type="checkbox" id="bomba3"><div></div>
                </label></td>
            </tr>
            <tr>
                <td class="titulo"><div>Fab 04</div></td>
                <td><select name="du4" id="" style="width: 100%; height: 100%; border: none;">
                    <option value="5">5:00</option>
                    <option value="10">10:00</option>
                    <option value="15">15:00</option>
                    <option value="20">20:00</option>
                    <option value="25">25:00</option>
                </select></td>
                <td><input type="time" name="hora4" id="timeSemana4"></td>
                <td><div  class="DATA">
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="0" class="S4" name="S4">
                            <div class="dom">D</div>
                        </label>
                        <label>
                            <input type="checkbox" value="1" class="S4" name="S4">
                            <div class="seg">S</div>
                        </label>
                        <label>
                            <input type="checkbox" value="2" class="S4" name="S4">
                            <div class="ter">T</div>
                        </label>
                        <label>
                            <input type="checkbox" value="3" class="S4" name="S4">
                            <div class="qua">Q</div>
                        </label>
                    </div>
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="4" class="S4" name="S4">
                            <div class="qui">Q</div>
                        </label><label>
                            <input type="checkbox" value="5" class="S4" name="S4">
                            <div class="sex">S</div>
                        </label><label>
                            <input type="checkbox" value="6" class="S4" name="S4">
                            <div class="sab">S</div>
                        </label>
                    </div>
                </div></td>
                <td><span class="umidade">0.75%</span></td>
                <td><label class="estadoBomba">
                    <input type="checkbox" id="bomba4"><div></div>
                </label></td>
            </tr>
            <tr>
                <td class="titulo"><div>Fab 05</div></td>
                <td><select name="du5" id="" style="width: 100%; height: 100%; border: none;">
                    <option value="5">5:00</option>
                    <option value="10">10:00</option>
                    <option value="15">15:00</option>
                    <option value="20">20:00</option>
                    <option value="25">25:00</option>
                </select></td>
                <td><input type="time" name="hora5" id="timeSemana5"></td>
                <td><div  class="DATA">
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="0" class="S5" name="S5">
                            <div class="dom">D</div>
                        </label>
                        <label>
                            <input type="checkbox" value="1" class="S5" name="S5">
                            <div class="seg">S</div>
                        </label>
                        <label>
                            <input type="checkbox" value="2" class="S5" name="S5">
                            <div class="ter">T</div>
                        </label>
                        <label>
                            <input type="checkbox" value="3" class="S5" name="S5">
                            <div class="qua">Q</div>
                        </label>
                    </div>
                    <div  class="semana">
                        <label>
                            <input type="checkbox" value="4" class="S5" name="S5">
                            <div class="qui">Q</div>
                        </label><label>
                            <input type="checkbox" value="5" class="S5" name="S5">
                            <div class="sex">S</div>
                        </label><label>
                            <input type="checkbox" value="6" class="S5" name="S5">
                            <div class="sab">S</div>
                        </label>
                    </div>
                </div></td>
                <td><span class="umidade">0.80%</span></td>
                <td><label class="estadoBomba">
                    <input type="checkbox" id="bomba5"><div></div>
                </label></td>
            </tr>
        </TABLE>
        <div id="conteiner_relogio">
            <div><div class="relogio">
                <div id="relogioD">Carregando...</div>
                <div id="relogioH"></div>
                <div id="relogioS"></div>
            </div></div>
        </div>
    </div>

</body>
<script>

  const mostraTime = () => {
      var nD = new Date();
      var dia = nD.getDate();
      var mes = (nD.getMonth() + 1);
      var ano = nD.getFullYear();
      var hora = nD.getHours();
      var minuto = nD.getMinutes();
      var semana = nD.getDay();
     
      if(dia < 10)dia = "0" + dia
      if(mes < 10)mes = "0" + mes
      if(hora < 10)hora = "0" + hora
      if(minuto < 10)minuto = "0" + minuto
     
      if(semana == 0)StrigSemana = "Domingo"
      else if(semana == 1)StrigSemana = "Segunda"
      else if(semana == 2)StrigSemana = "Terça"
      else if(semana == 3)StrigSemana = "Quarta"
      else if(semana == 4)StrigSemana = "Quinta"
      else if(semana == 5)StrigSemana = "Sexta"
      else if(semana == 6)StrigSemana = "Sabado"
     
      document.querySelector("#relogioD").innerHTML = ("<span> "+dia+"/"+mes+"/"+ano+" </span>")
      document.querySelector("#relogioH").innerHTML = ("<span> "+hora+":"+minuto+" </span>")
      document.querySelector("#relogioS").innerHTML = ("<span> "+StrigSemana+" </span>")    
  }

  mostraTime()
  setInterval(mostraTime,10000)

  let firtScanf = 0
  InitWebSocket()
  function InitWebSocket(){
    websock = new WebSocket('ws://'+window.location.hostname+':81/');
    websock.onmessage = jsonMaster => {

        jsonEsp = JSON.parse(jsonMaster.data);

        if(!firtScanf){
            
            

            document.getElementById('farofa').style.color = 'red';


            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1
           
            document.getElementById('duracao1').value = jsonEsp.DURACAO2
            document.getElementById('timeSemana1').value = jsonEsp.HORA2

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1


            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1
           
            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1
           
            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1
           
            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1
           
            document.getElementById('duracao1').value = jsonEsp.DURACAO1
            document.getElementById('timeSemana1').value = jsonEsp.HORA1

            document.getElementById('S1_0').checked = jsonEsp.S1_0 == 'true'? true:false;
            document.getElementById('S1_1').checked = jsonEsp.S1_1 == 'true'? true:false;
            document.getElementById('S1_2').checked = jsonEsp.S1_2 == 'true'? true:false;
            document.getElementById('S1_3').checked = jsonEsp.S1_3 == 'true'? true:false;
            document.getElementById('S1_4').checked = jsonEsp.S1_4 == 'true'? true:false;
            document.getElementById('S1_5').checked = jsonEsp.S1_5 == 'true'? true:false;
            document.getElementById('S1_6').checked = jsonEsp.S1_6 == 'true'? true:false;
           
            document.getElementById('umidade1').innerHTML = jsonEsp.UMIDADE1





            firtScanf=1
        }
       
 
    }
  }

  //setTimeout(setVariaveisPag,1000)

  function fanONOFF(){
   
    websock.send('DURACAO=' + String(document.getElementById('duracao1').value))
    websock.send('HORA=' + String(document.getElementById('timeSemana1').value))

    for(let i = 0; i < 7; i++){
        websock.send('S1_'+ i+'='+(document.getElementById('S1_'+ i).checked))
    }
   



    /*FANbtn = 'LEDonoff=ON';
    if(document.getElementById('FANbtn').innerHTML == 'ON'){
      FANbtn = 'LEDonoff=OFF';
    }
    websock.send(FANbtn);*/
  }

</script>
</html>
)====="; 
