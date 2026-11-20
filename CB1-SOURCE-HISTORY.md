# libplacebo source history

[Original source](https://github.com/haasn/libplacebo) · [Image and releases](https://github.com/CroqueMr/libreelec-CB1)

The tables record historical source deltas, original evidence, and category. LibreELEC selects tested source commits through its recipes.
Early rebases and inconsistent surviving patch stacks can leave intermediate snapshots unverified.

## Related repositories

- [libreelec-CB1](https://github.com/CroqueMr/libreelec-CB1)
- [FFmpeg](https://github.com/CroqueMr/FFmpeg)
- [xbmc](https://github.com/CroqueMr/xbmc)
- [CB1](https://github.com/CroqueMr/CB1)
- [libbluray-cb1](https://github.com/CroqueMr/libbluray-cb1)
- [linux](https://github.com/CroqueMr/linux)
- [open-gpu-kernel-modules](https://github.com/CroqueMr/open-gpu-kernel-modules)
- [egl-gbm](https://github.com/CroqueMr/egl-gbm)

## Merged source pull requests

| Change | Category | Source commit | History branch |
|---|---|---|---|
| [libplacebo: Optimize eligible full-screen GPU rendering passes](https://github.com/CroqueMr/libplacebo/pull/2) | Performance Improvement | 44496b1c0407 | codex/1.1-history-libplacebo |
| [libplacebo: Discover supported OpenGL subgroup capabilities](https://github.com/CroqueMr/libplacebo/pull/3) | Upstream Fix | 6e94e8b51d56 | codex/1.1-history-libplacebo |
| [libplacebo: Expose supported full-precision GLES render targets](https://github.com/CroqueMr/libplacebo/pull/4) | Upstream Fix | a5feecf347b0 | codex/1.1-history-libplacebo |
| [libplacebo: Preserve high-bit-depth texture sampling precision](https://github.com/CroqueMr/libplacebo/pull/5) | Upstream Fix | 1afa5a47f7a3 | codex/1.1-history-libplacebo |
| [libplacebo: Require full-precision intermediate rendering when requested](https://github.com/CroqueMr/libplacebo/pull/6) | Upstream Fix | 7519051be535 | codex/1.1-history-libplacebo |
| [libplacebo: Enable float texture filtering only when supported](https://github.com/CroqueMr/libplacebo/pull/7) | Upstream Fix | 0d8a899c7dd5 | codex/1.1-history-libplacebo |
| [libplacebo: Prevent rounding noise from creating false FEL residuals](https://github.com/CroqueMr/libplacebo/pull/8) | DV Patch | c1d36ca39b0a | codex/1.1-history-libplacebo |
| [libplacebo: Place custom GLES extension directives before shader declarations](https://github.com/CroqueMr/libplacebo/pull/9) | Upstream Fix | 2f3b66fa5e04 | codex/1.1-history-libplacebo |
| [perf: release Opt1 active-area and libplacebo rendering optimizations](https://github.com/CroqueMr/libplacebo/pull/10) | Performance Improvement | e628034a9ccc | codex/1.1-history-libplacebo |
| [Integrate CB1 and Dolby Vision playback for R1.0.0 Beta1](https://github.com/CroqueMr/libplacebo/pull/11) | DV Patch | d9e0abc18686 | codex/1.1-history-libplacebo |
| [release: align main with R1.0.0 RC2 and CB1 0.5](https://github.com/CroqueMr/libplacebo/pull/12) | DV Patch | 558863b01656 | codex/1.1-history-libplacebo |
| [Sync published RC3 source and refresh repository documentation](https://github.com/CroqueMr/libplacebo/pull/13) | DV Patch | afe24b46d407 | codex/1.1-history-libplacebo |
| [Lldv handshake](https://github.com/CroqueMr/libplacebo/pull/14) | DV Patch | 81a579ee30cf | codex/1.1-history-libplacebo |
| [Restore the R1.0.0-RC3-Preview source checkpoint](https://github.com/CroqueMr/libplacebo/pull/15) | Upstream Fix | beee95bacfde | codex/1.1-checkpoint-libplacebo-r1-0-0-rc3-preview |

## libplacebo source checkpoints

| Release | Published integration source | Recovered source tree |
|---|---|---|
| v0.1.0-rc1 | [482de3b6d434](https://github.com/CroqueMr/libreelec-CB1/commit/482de3b6d43497eaed9db293d7cf54efd342ca80) | 892c7233f33ee4b790c92b3a44bcdb37fd373329 |
| v0.1.0-rc1-opt1 | [d5976b3338ea](https://github.com/CroqueMr/libreelec-CB1/commit/d5976b3338ea7999e8dc8522251043d7cefb75d6) | 6994d8a4d787428308031e36fbfba307188a594c |
| v0.1.0-rc1-opt1-diag1 | [73d61bf60e7d](https://github.com/CroqueMr/libreelec-CB1/commit/73d61bf60e7d848efcc6d3653e6ac9e84acdbc38) | 6994d8a4d787428308031e36fbfba307188a594c |
| R0.1.0-rc2-opt1 | [1b3146f8d69a](https://github.com/CroqueMr/libreelec-CB1/commit/1b3146f8d69a036128f15c85a4bb7b2773a3524c) | 6994d8a4d787428308031e36fbfba307188a594c |
| R0.2.1-opt1 | [e40764f390a4](https://github.com/CroqueMr/libreelec-CB1/commit/e40764f390a4398de35cc7134cdd30d224f33bb0) | 6994d8a4d787428308031e36fbfba307188a594c |
| R0.2.1a-opt1 | [68383affb3d5](https://github.com/CroqueMr/libreelec-CB1/commit/68383affb3d5535dac0446106d1fe44cf58eeaa4) | 6994d8a4d787428308031e36fbfba307188a594c |
| R0.3.0 | [d852be418216](https://github.com/CroqueMr/libreelec-CB1/commit/d852be4182167580d8cdab48d90d9ef9150ed555) | 6994d8a4d787428308031e36fbfba307188a594c |
| R1.0.0-Beta1 | [d14b473ea117](https://github.com/CroqueMr/libreelec-CB1/commit/d14b473ea117b097fb7f2810318bf2177056b41d) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta2 | [e496c862af5b](https://github.com/CroqueMr/libreelec-CB1/commit/e496c862af5b58c6cd9185cec3947f2e96ffea91) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta3 | [e496c862af5b](https://github.com/CroqueMr/libreelec-CB1/commit/e496c862af5b58c6cd9185cec3947f2e96ffea91) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta4 | [64c22141cf84](https://github.com/CroqueMr/libreelec-CB1/commit/64c22141cf84f98efbf1c7df64cfbe1812e7f477) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta4-debug | [50c49f02456b](https://github.com/CroqueMr/libreelec-CB1/commit/50c49f02456b25da315e61d4696425a18d40f2bc) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta5 | [e029707626d1](https://github.com/CroqueMr/libreelec-CB1/commit/e029707626d1854ec7eeecda1a4282f9b105b49d) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-Beta5-debug | [e029707626d1](https://github.com/CroqueMr/libreelec-CB1/commit/e029707626d1854ec7eeecda1a4282f9b105b49d) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-RC1 | [a5800b6e981b](https://github.com/CroqueMr/libreelec-CB1/commit/a5800b6e981b2f847d36e6311f80948217b9b178) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-RC1.1 | [47ccdcf3a2aa](https://github.com/CroqueMr/libreelec-CB1/commit/47ccdcf3a2aaeb74faf7e38a0ececa731d57709a) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| R1.0.0-RC1.1-Debug | [c7510d53f26f](https://github.com/CroqueMr/libreelec-CB1/commit/c7510d53f26fde56c79d14b2929aa8613ecfba89) | 8a594fc69844c2de93fc6b1e975926cefb3b8a34 |
| untagged-27906d2c4291ba113414 | [0069b5cf7e6f](https://github.com/CroqueMr/libreelec-CB1/commit/0069b5cf7e6fd23aa7f6e7cbcbcc59fc20420f96) | 671c086506741ff4116afb0e1209c9f021cd0db6 |
| R1.0.0-RC3-Preview | [aad993eb10cf](https://github.com/CroqueMr/libreelec-CB1/commit/aad993eb10cf9eb93ff4a3f1eabb22db90b4fdff) | 9948e1ef24113a7c784284597bc0c1cb504e2394 |
| R1.0.0-RC3 | [80a9ab2d6218](https://github.com/CroqueMr/libreelec-CB1/commit/80a9ab2d6218e0e83fb8e0ee4127bd5c60eced26) | 5a28804391879ff6e719097913769df412820b4d |
| R1.0.0-RC4-Preview | [f630d2e9eaab](https://github.com/CroqueMr/libreelec-CB1/commit/f630d2e9eaabc3b83d27621b64af044e7a316f4d) | 5a28804391879ff6e719097913769df412820b4d |
| candidate/dv-r1.0.0-f8075f0b | [f8075f0b7552](https://github.com/CroqueMr/libreelec-CB1/commit/f8075f0b755233ee73a613eb4be73f72ebc65244) | 44e241804f92b41aa0c62e253f93797270092614 |
| R1.0.0 | [e46aca8a03eb](https://github.com/CroqueMr/libreelec-CB1/commit/e46aca8a03eba080950e029d09762a2a040bac61) | 44e241804f92b41aa0c62e253f93797270092614 |
| R1.0.1-RC1 | [7f3e4b260cf8](https://github.com/CroqueMr/libreelec-CB1/commit/7f3e4b260cf8a32170accd2cc6451b18142b2011) | 44e241804f92b41aa0c62e253f93797270092614 |
| R1.0.1-RC2 | [22c88f0ac18e](https://github.com/CroqueMr/libreelec-CB1/commit/22c88f0ac18e46cec7b8ceaaf10b614ee845d928) | 44e241804f92b41aa0c62e253f93797270092614 |

## Upstream preparation

Propose general correctness fixes and performance improvements against the owning project. Separate Dolby Vision policy from generic API changes and retain the original attribution.
See the linked PRs for their DV Patch, Upstream Fix or Performance Improvement category.
