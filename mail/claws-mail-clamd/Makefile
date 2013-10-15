# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: mail/claws-mail-clamd/Makefile 329440 2013-10-05 11:25:29Z pawel $

PORTNAME=	clamd
PORTREVISION=	0

COMMENT=	ClamAV based antivirus plugin for Claws Mail

RUN_DEPENDS=	clamd:${PORTSDIR}/security/clamav

CLAWS_PLUGINS_BUILD=	clamd

post-install:
	@${ECHO}
	@${ECHO_CMD} "********************************************************************************"
	@${CAT} ${PKGMESSAGE}
	@${ECHO_CMD} "********************************************************************************"
	@${ECHO}

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
