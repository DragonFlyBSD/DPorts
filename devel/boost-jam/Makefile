# Ports collection makefile for:  boost-jam
# Date Created:			  15 March 2009
# Whom:				  Alexander Churanov <churanov.port.maintainer@gmail.com>
#
# $FreeBSD: ports/devel/boost-jam/Makefile,v 1.5 2012/11/17 05:55:35 svnexp Exp $
#

PORTNAME=	boost-jam
COMMENT=	Build tool from the boost.org
USE_BZIP2=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/boost-all/common.mk"

BJAM=		${WRKSRC}/bjam

post-patch:
	@${REINPLACE_CMD} -e '/toolset cc/,/;/ { /opt --release/d; }' ${WRKSRC}/tools/build/v2/engine/build.jam

do-build:
	cd ${WRKSRC} && ${MAKE_ENV} ./bootstrap.sh --with-toolset=cc --prefix=${PREFIX}

do-install:
	${MKDIR} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${BJAM} ${PREFIX}/bin/

.include <bsd.port.post.mk>
