{
  "id": "53ec37c3-c994-45a7-816b-8aeeeefa1506",
  "version": "2.0",
  "name": "Davi",
  "url": "https://www.educacao.petrolina.pe.gov.br",
  "tests": [{
    "id": "fea68982-0730-416c-b284-aa14f1a95d51",
    "name": "Davi",
    "commands": [{
      "id": "096660f3-c196-4f50-9215-5dd76dc1728c",
      "comment": "",
      "command": "open",
      "target": "/ator/educadores",
      "targets": [],
      "value": ""
    }, {
      "id": "b6a859d4-5176-4b76-92dc-9335d50f1875",
      "comment": "",
      "command": "setWindowSize",
      "target": "976x1040",
      "targets": [],
      "value": ""
    }, {
      "id": "ceeb9e84-bde4-4467-8ac0-d6b01596fc38",
      "comment": "",
      "command": "click",
      "target": "css=html",
      "targets": [
        ["css=html", "css:finder"],
        ["xpath=//html", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "d8e756f8-2d7e-4457-a6c6-16e6fc4c85a0",
      "comment": "",
      "command": "type",
      "target": "id=login",
      "targets": [
        ["id=login", "id"],
        ["name=login", "name"],
        ["css=#login", "css:finder"],
        ["xpath=//input[@id='login']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input", "xpath:idRelative"],
        ["xpath=//div/input", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "c3212248-52d1-4eaf-be39-22a43a6ea3e1",
      "comment": "",
      "command": "click",
      "target": "css=.LayoutLoginCampos",
      "targets": [
        ["css=.LayoutLoginCampos", "css:finder"],
        ["xpath=//form[@id='frmLogon']/div", "xpath:idRelative"],
        ["xpath=//form/div", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "9ee0f48a-dc4e-4e64-be9c-21765afc7d43",
      "comment": "",
      "command": "type",
      "target": "id=senha",
      "targets": [
        ["id=senha", "id"],
        ["name=senha", "name"],
        ["css=#senha", "css:finder"],
        ["xpath=//input[@id='senha']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input[2]", "xpath:idRelative"],
        ["xpath=//div/input[2]", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "ec9638ad-d5b7-4023-91af-4c297bab4be9",
      "comment": "",
      "command": "click",
      "target": "id=login",
      "targets": [
        ["id=login", "id"],
        ["name=login", "name"],
        ["css=#login", "css:finder"],
        ["xpath=//input[@id='login']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input", "xpath:idRelative"],
        ["xpath=//div/input", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "628e6a2a-c403-4e36-8e6a-a15099818ea6",
      "comment": "",
      "command": "type",
      "target": "id=login",
      "targets": [
        ["id=login", "id"],
        ["name=login", "name"],
        ["css=#login", "css:finder"],
        ["xpath=//input[@id='login']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input", "xpath:idRelative"],
        ["xpath=//div/input", "xpath:position"]
      ],
      "value": "Davi.BC"
    }, {
      "id": "e1f787cf-9c4d-4613-bed4-b7052463d81d",
      "comment": "",
      "command": "type",
      "target": "id=senha",
      "targets": [
        ["id=senha", "id"],
        ["name=senha", "name"],
        ["css=#senha", "css:finder"],
        ["xpath=//input[@id='senha']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input[2]", "xpath:idRelative"],
        ["xpath=//div/input[2]", "xpath:position"]
      ],
      "value": "@Vk5644202510"
    }, {
      "id": "490dc69a-56a9-4b9f-89ba-2891d6c58225",
      "comment": "",
      "command": "sendKeys",
      "target": "id=senha",
      "targets": [
        ["id=senha", "id"],
        ["name=senha", "name"],
        ["css=#senha", "css:finder"],
        ["xpath=//input[@id='senha']", "xpath:attributes"],
        ["xpath=//form[@id='frmLogon']/div/input[2]", "xpath:idRelative"],
        ["xpath=//div/input[2]", "xpath:position"]
      ],
      "value": "${KEY_ENTER}"
    }, {
      "id": "b87cdcd1-370d-44a8-8d65-934d17b85c8b",
      "comment": "",
      "command": "click",
      "target": "css=.menuAcessoRestrito",
      "targets": [
        ["css=.menuAcessoRestrito", "css:finder"],
        ["xpath=//button[@onclick='exibeMenuRestrito.trocarestado()']", "xpath:attributes"],
        ["xpath=//div/div/button", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "9c6797ef-b94d-48e8-9657-bd825be56019",
      "comment": "",
      "command": "click",
      "target": "linkText=Gestão Escolar",
      "targets": [
        ["linkText=Gestão Escolar", "linkText"],
        ["css=#submenuRestrito li:nth-child(2) > a", "css:finder"],
        ["xpath=//div[@id='submenuRestrito']/ul/li[2]/a", "xpath:idRelative"],
        ["xpath=//a[contains(@href, '/gestaoescolar/perfil.do')]", "xpath:href"],
        ["xpath=//div/div/div/div/div/ul/li[2]/a", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "198ad7fb-3623-421d-bebb-c925069dabfd",
      "comment": "",
      "command": "click",
      "target": "css=.icon-eol1331",
      "targets": [
        ["css=.icon-eol1331", "css:finder"],
        ["xpath=//div[@id='divListaModulos']/a[2]/div", "xpath:idRelative"],
        ["xpath=//a[2]/div", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "59512c67-3db2-4ecc-b7de-1b9927f01f66",
      "comment": "",
      "command": "click",
      "target": "xpath=//div[3]/div/div/div/div",
      "targets": [
        ["css=#divMenuGestao_1669724705127_i1333 > .AccordionMenuContent", "css:finder"],
        ["xpath=//div[@id='divMenuGestao_1669724705127_i1333']/div", "xpath:idRelative"],
        ["xpath=//div[3]/div/div/div/div", "xpath:position"]
      ],
      "value": ""
    }, {
      "id": "74307e94-bd27-43b4-a372-3ce1359ae114",
      "comment": "",
      "command": "click",
      "target": "xpath=//ul/li",
      "targets": [
        ["id=divMenuGestao_1669724705127_i1345", "id"],
        ["css=#divMenuGestao_1669724705127_i1345", "css:finder"],
        ["xpath=//li[@id='divMenuGestao_1669724705127_i1345']", "xpath:attributes"],
        ["xpath=//ul[@id='dojoc_sandbox_menu_AccordionMenuSubMenu_0']/li", "xpath:idRelative"],
        ["xpath=//ul/li", "xpath:position"],
        ["xpath=//li[contains(.,'Matrícula')]", "xpath:innerText"]
      ],
      "value": ""
    }, {
      "id": "de15f10b-cfbb-461c-872e-b58a153a830b",
      "comment": "",
      "command": "click",
      "target": "xpath=//ul/li[4]",
      "targets": [
        ["id=divMenuGestao_1669724705127_i1350", "id"],
        ["css=#divMenuGestao_1669724705127_i1350", "css:finder"],
        ["xpath=//li[@id='divMenuGestao_1669724705127_i1350']", "xpath:attributes"],
        ["xpath=//ul[@id='dojoc_sandbox_menu_AccordionMenuSubMenu_1']/li[4]", "xpath:idRelative"],
        ["xpath=//ul/li[4]", "xpath:position"],
        ["xpath=//li[contains(.,'Cadastro')]", "xpath:innerText"]
      ],
      "value": ""
    }, {
      "id": "4592bc66-ecf2-466a-8f8e-bc0fd09ae434",
      "comment": "",
      "command": "selectFrame",
      "target": "index=0",
      "targets": [
        ["index=0"]
      ],
      "value": ""
    }, {
      "id": "0fe792f6-bcf7-409e-b771-a8da5de700ce",
      "comment": "",
      "command": "click",
      "target": "name=txtAluno",
      "targets": [
        ["name=txtAluno", "name"],
        ["css=tr:nth-child(3) .texto", "css:finder"],
        ["xpath=//input[@name='txtAluno']", "xpath:attributes"],
        ["xpath=//div[@id='divCorpoGestaoEscolar']/form/table/tbody/tr/td/div[2]/div[4]/div/table/tbody/tr[3]/td[2]/input", "xpath:idRelative"],
        ["xpath=//tr[3]/td[2]/input", "xpath:position"]
      ],
      "value": ""
    }]
  }],
  "suites": [{
    "id": "6bfd9fcc-afe8-40c2-a797-d206b817cc56",
    "name": "Default Suite",
    "persistSession": false,
    "parallel": false,
    "timeout": 300,
    "tests": ["fea68982-0730-416c-b284-aa14f1a95d51"]
  }],
  "urls": ["https://www.educacao.petrolina.pe.gov.br/"],
  "plugins": []
}