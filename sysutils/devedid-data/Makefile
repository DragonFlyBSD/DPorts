
PORTNAME=	devedid-data
PORTVERSION=	2
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://www.kernel.org/doc/Documentation/
DISTFILES=	EDID/1024x768.S EDID/1280x1024.S EDID/1600x1200.S	\
		EDID/1680x1050.S EDID/1920x1080.S EDID/800x600.S 	\
		EDID/HOWTO.txt EDID/edid.S

MAINTAINER=	zrj@ef.irc
COMMENT=	Simple generic monitor EDID firmwares

LICENSE=	GPLv2

NO_WRKSUBDIR=	yes
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/edid

post-extract:
	${CP} -p ${FILESDIR}/Makefile ${WRKSRC}

do-extract:
	@${RM} -rf ${WRKSRC}
	@${MKDIR} ${WRKSRC}
	@for _file in ${DISTFILES}; do \
		${CP} ${DISTDIR}/$${_file} ${WRKSRC}; \
	done

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${FILESDIR}/gen-fw_module.sh ${STAGEDIR}${LOCALBASE}/bin
	${INSTALL_DATA} ${WRKSRC}/*.S ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/*.bin ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/Makefile ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/HOWTO.txt ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
