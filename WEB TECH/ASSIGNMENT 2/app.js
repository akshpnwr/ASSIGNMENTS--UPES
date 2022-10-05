const inputNameElement = document.getElementById('name');
const inputEmailElement = document.getElementById('mail');
const formElement = document.querySelector('.form');
const inputMobileElement = document.getElementById('mobile');
const inputQuantitiesElement = document.getElementById('quantities');

function containsNumber(str) {
  return /[0-9]/.test(str);
}

const onSubmit = (event) => {
  event.preventDefault();

  if (!inputNameElement.value || containsNumber(inputNameElement.value)) {
    alert('Please enter a valid name');
    return;
  }

  if (!inputEmailElement.value.includes('@')) {
    alert('Please enter a valid email');
    return;
  }

  if (inputMobileElement.value.length !== 10) {
    alert('Please enter a valid mobile number');
    return;
  }

  if (inputQuantitiesElement.value <= 0) {
    alert('Please enter valid quantities');
    return;
  }

  alert('order succesfully recieved');
};

const validateName = (e) => {
  if (Number.isInteger(parseInt(e.key))) {
    inputNameElement.style.backgroundColor = '#F65151';
  } else {
    inputNameElement.style.backgroundColor = '';
  }
};

const validateMobile = (e) => {
  console.log(inputMobileElement.value);

  if (inputMobileElement.value.length !== 10) {
    inputMobileElement.style.backgroundColor = '#F65151';
  } else {
    inputMobileElement.style.backgroundColor = '';
  }
};

inputNameElement.addEventListener('keypress', validateName);
inputMobileElement.addEventListener('focusout', validateMobile);
formElement.addEventListener('submit', onSubmit);
