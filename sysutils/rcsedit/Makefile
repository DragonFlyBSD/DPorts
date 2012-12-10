# Ports collection makefile for:  rcsedit
# Date created:  22 June 2006
# Whom:		Antonio Querubin <tony@lava.net>
#
# $FreeBSD: ports/sysutils/rcsedit/Makefile,v 1.4 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	rcsedit
PORTVERSION=	1.3.2
CATEGORIES=	sysutils
MASTER_SITES=	http://malasada.lava.net/rcsedit/ \
		http://lava.net/files/rcsedit/ \
		http://ipv6.lava.net/rcsedit/

MAINTAINER=	rcsedit@lava.net
COMMENT=	A simple wrapper for RCS written in Perl

PLIST_FILES=	bin/rcsedit

USE_PERL5_RUN=	yes

post-patch:
	@${REINPLACE_CMD} -e '1s|.*perl|#!${PERL}|' ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
