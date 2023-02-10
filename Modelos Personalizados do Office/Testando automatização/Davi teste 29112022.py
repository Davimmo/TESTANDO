from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

class TestDavi1():
  def setup_method(self, method):
    self.driver = webdriver.Chrome()
    self.vars = {}
  
  def teardown_method(self, method):
    self.driver.quit()
  
  def test_davi1(self):
    self.driver.get("https://www.educacao.petrolina.pe.gov.br/ator/educadores")
    self.driver.set_window_size(976, 1040)
    self.driver.find_element(By.CSS_SELECTOR, "html").click()
    self.driver.find_element(By.CSS_SELECTOR, ".LayoutLoginCampos").click()
    self.driver.find_element(By.ID, "login").click()
    self.driver.find_element(By.ID, "login").send_keys("Davi.BC")
    self.driver.find_element(By.ID, "senha").send_keys("@Vk5644202510")
    self.driver.find_element(By.ID, "senha").send_keys(Keys.ENTER)
    self.driver.find_element(By.CSS_SELECTOR, ".menuAcessoRestrito").click()
    self.driver.find_element(By.LINK_TEXT, "Gestão Escolar").click()
    self.driver.find_element(By.CSS_SELECTOR, ".icon-eol1331").click()
    self.driver.find_element(By.XPATH, "//div[3]/div/div/div/div").click()
    self.driver.find_element(By.XPATH, "//ul/li").click()
    self.driver.find_element(By.XPATH, "//ul/li[4]").click()
    self.driver.switch_to.frame(0)
    self.driver.find_element(By.NAME, "txtAluno").click()
  
