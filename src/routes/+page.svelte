<script>
  import { onMount } from "svelte";
  import LoginView from "./LoginView.svelte";

  let loggedIn = false;

  onMount(async () => {
    const token = localStorage.getItem("sessionToken");

    if (!token) return;

    try {
      const resp = await fetch(
        "http://localhost:6942/api/v1/users/validate",
        {
          headers: {
            Authorization: `Bearer ${token}`
          }
        }
      );

      loggedIn = resp.ok;
    } catch (err) {
      console.error(err);
    }
  });
</script>

{#if loggedIn}
  <h1>Welcome!</h1>
{:else}
  <LoginView />
{/if}