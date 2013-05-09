PORTNAME=	libgssglue
PORTVERSION=	0.4
CATEGORIES=	net
MASTER_SITES=	http://www.citi.umich.edu/projects/nfsv4/linux/libgssglue/

MAINTAINER=	ftigeot@wolfpond.org
COMMENT=	Library re-exporting a gssapi interface

LICENSE=	BSD MIT
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GMAKE=	yes
USE_AUTOTOOLS=	aclocal autoheader automake autoconf libtoolize
ACLOCAL_ARGS=	-I.
AUTOMAKE_ARGS=	--add-missing
USES+=		pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
