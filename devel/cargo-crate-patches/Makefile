
PORTNAME=	cargo-crate-patches
PORTVERSION=	1.0
CATEGORIES=	devel

MAINTAINER=	ports@dragonflybsd.org
COMMENT=	DragonFly patches for vendored cargo crates

USES=		metaport

# The payload is the extra-<crate>-<version> files under files/.
# Mk/Uses/cargo-extra.mk resolves CARGO_EXTRA_PATCHDIR here and adds any
# that match a port's CARGO_CRATES to EXTRA_PATCHES. Nothing installs.

.include <bsd.port.mk>
