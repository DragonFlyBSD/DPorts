# $FreeBSD: sysutils/dvtm/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	dvtm
PORTVERSION=	0.8
CATEGORIES=	sysutils
MASTER_SITES=	http://www.brain-dump.org/projects/dvtm/

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Tiling window management for the console

MAN1=		dvtm.1
PLIST_FILES=	bin/dvtm bin/dvtm-status

NO_STAGE=	yes
pre-everything::
	@${ECHO_MSG} "You can build dvtm with your own config.h using the DVTM_CONF knob:"
	@${ECHO_MSG} "make DVTM_CONF=/path/to/dvtm/config.h install clean"

post-extract:
.if defined(DVTM_CONF)
	@${ECHO_MSG} "creating config.h from ${DVTM_CONF}"
	@${CP} ${DVTM_CONF} ${WRKSRC}/config.h
.endif

.include <bsd.port.mk>
