# activates the simbricks conda env created by setup.sh
_repo="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export SIMB_ROOT="${SIMB_ROOT:-$_repo/.simbricks}"
export MAMBA_ROOT_PREFIX="$SIMB_ROOT/mamba"
export PACKER_PLUGIN_PATH="$SIMB_ROOT/packer-plugins"
export PACKER_CACHE_DIR="$SIMB_ROOT/packer-cache"
export PATH="$SIMB_ROOT/bin:$PATH"
eval "$("$SIMB_ROOT/bin/micromamba" shell hook --shell bash)"
micromamba activate simbricks
unset _repo
