#
# This file contains logic to ease patching cargo crates.
#
# Feature:	cargo
# Usage:	USES=cargo:extra
#
# MAINTAINER: rust@FreeBSD.org

.if !defined(_INCLUDE_USES_CARGO_EXTRA_MK)
_INCLUDE_USES_CARGO_EXTRA_MK=	yes

# The patches live in a container port rather than beside lang/rust, so that
# adding one does not mean touching lang/rust and forcing a rust rebuild.
CARGO_EXTRA_PATCHDIR=	${PORTSDIR}/devel/cargo-crate-patches/files

# Iterate over CARGO_CRATES and add to EXTRA_PATCHES patches to specific versions
# of that specific crate. CARGO_CRATES must already be populated -- see the
# include site in cargo.mk.
_LOCAL_CARGO_CRATES=${CARGO_CRATES:N*@git+*}
.for _crate in ${_LOCAL_CARGO_CRATES}
.if exists(${CARGO_EXTRA_PATCHDIR}/extra-${_crate})
EXTRA_PATCHES+=	${CARGO_EXTRA_PATCHDIR}/extra-${_crate}
.endif
.endfor

.endif
