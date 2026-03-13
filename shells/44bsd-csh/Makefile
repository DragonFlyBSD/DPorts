PORTNAME=	44bsd-csh
PORTVERSION=	20001106
PORTREVISION=	7
CATEGORIES=	shells
MASTER_SITES=	LOCAL/cy

MAINTAINER=	cy@FreeBSD.org
COMMENT=	The traditional 4.4BSD /bin/csh C-shell

EXTRACT_DEPENDS=	rcs:devel/rcs57

USES=		tar:bzip2
LDFLAGS=	-Wl,--allow-multiple-definition
NO_WRKSUBDIR=	yes

OPTIONS_DEFINE=	DOCS

post-extract:
	cd ${WRKSRC} ; co RCS/*,v; chmod u+w *
	cd ${WRKSRC}/USD.doc ; co RCS/*,v

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/csh ${STAGEDIR}${PREFIX}/bin/44bsd-csh
	${INSTALL_MAN} ${WRKSRC}/csh.1 ${STAGEDIR}${PREFIX}/share/man/man1/44bsd-csh.1

tarup:
	cd ${WRKSRC} ; rm * USD.doc/*
	cd ${WRKSRC} ; ${TAR} cvyf /tmp/${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

.include <bsd.port.mk>
