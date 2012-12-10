# $FreeBSD: ports/sysutils/dvtm/Makefile,v 1.9 2012/11/17 06:01:29 svnexp Exp $

PORTNAME=	dvtm
PORTVERSION=	0.8
CATEGORIES=	sysutils
MASTER_SITES=	http://www.brain-dump.org/projects/dvtm/

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Tiling window management for the console

MAN1=		dvtm.1
PLIST_FILES=	bin/dvtm bin/dvtm-status

pre-everything::
	@${ECHO_MSG} "You can build dvtm with your own config.h using the DVTM_CONF knob:"
	@${ECHO_MSG} "make DVTM_CONF=/path/to/dvtm/config.h install clean"

post-extract:
.if defined(DVTM_CONF)
	@${ECHO_MSG} "creating config.h from ${DVTM_CONF}"
	@${CP} ${DVTM_CONF} ${WRKSRC}/config.h
.endif

.include <bsd.port.mk>
