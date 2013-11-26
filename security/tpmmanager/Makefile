# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: security/tpmmanager/Makefile 334602 2013-11-22 18:48:31Z makc $

PORTNAME=	tpmmanager
PORTVERSION=	0.8.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-${PORTVERSION:C/\.1//}/

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	TPM Manager

LICENSE=	GPLv2

LIB_DEPENDS=	libtspi.so:${PORTSDIR}/security/trousers

USES=		qmake
USE_QT4=	gui moc_build rcc_build uic_build

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/latex/${PORTNAME}.pdf ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/doc/TPM_Manager.odt ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
