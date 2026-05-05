$(document).ready(function() {
  $('#password').on('keyup', function() {
    const password = $(this).val();
    const strengthLabel = $('#strength');

    // Reset class
    strengthLabel.removeClass('weak medium strong');

    // Weak Password: less than 6 characters
    if (password.length < 6) {
      strengthLabel.text('weak').addClass('weak');
    }
    // Medium Password: at least 6 characters, has letters and numbers
    else if (password.match(/^(?=.*[a-zA-Z])(?=.*[0-9]).{6,}$/) &&
             !password.match(/^(?=.*[A-Z])(?=.*[0-9])(?=.*[\W_]).{8,}$/)) {
      strengthLabel.text('medium').addClass('medium');
    }
    // Strong Password: at least 8 characters, includes uppercase, numbers, symbols
    else if (password.match(/^(?=.*[A-Z])(?=.*[0-9])(?=.*[\W_]).{8,}$/)) {
      strengthLabel.text('strong').addClass('strong');
    }
    else {
      strengthLabel.text('weak').addClass('weak');
    }
  });
});
