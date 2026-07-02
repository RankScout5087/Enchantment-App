<script>
  async function login() {
    console.log("Login button pressed");

    // Replace this with your real login request
    localStorage.setItem("sessionToken", "example-token");

    location.reload();
  }
</script>

<div class="login-view">
  <h1 class="heading">Enchantment uwu</h1>

  <button on:click={login} class="button">
    Login
  </button>
</div>

<style>
  .login-view {
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    height: 100vh;
  }

  .heading {
    font-size: 24px;
    font-weight: bold;
  }

  .button {
    margin-top: 16px;
    padding: 10px 20px;
    background: #007aff;
    color: white;
    border: none;
    border-radius: 8px;
    cursor: pointer;
    font-size: 16px;
  }

  .button:hover {
    opacity: 0.9;
  }
</style>