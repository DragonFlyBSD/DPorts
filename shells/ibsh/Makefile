# Created by: Vaida Bogdan
# $FreeBSD: shells/ibsh/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ibsh
PORTVERSION=	0.3e
CATEGORIES=	shells
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Restricted unix shell

OPTIONS_DEFINE=	DOCS

USES=		gmake
ALL_TARGET=	ibsh
INSTALL_TARGET=	ibsh_install
MAKE_ARGS=	CC="${CC}" PREFIX="${STAGEDIR}${PREFIX}"

SUB_FILES=	pkg-message
PORTDOCS=	AUTHORS BUGS CONTRIBUTORS COPYING COPYRIGHT ChangeLog \
		INSTALL README TODO VERSION

post-patch:
	@${REINPLACE_CMD} -e 's|PATH_MAX|PATH_MAXb|g' ${WRKSRC}/delbadfiles.c ${WRKSRC}/ibsh.h
	@${REINPLACE_CMD} -e 's|/etc/ibsh|${PREFIX}/etc/ibsh|g' ${WRKSRC}/ibsh.h

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/ibsh

.include <bsd.port.mk>
