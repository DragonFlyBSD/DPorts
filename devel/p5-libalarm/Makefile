# New ports collection makefile for:	p5-libalarm
# Date created:				March 27, 2008
# Whom:					Marzhan Mykola <delgod@portaone.com>
#
# $FreeBSD: ports/devel/p5-libalarm/Makefile,v 1.2 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	libalarm
PORTVERSION=	1.0
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN/Alarm
PKGNAMEPREFIX=	p5-

MAINTAINER=	delgod@portaone.com
COMMENT=	Allow multiple, queued alarms

PERL_CONFIGURE=	yes

MAN3=		Alarm::_TieSIG.3 \
		Alarm::Concurrent.3 \
		Alarm::Queued.3

post-patch:
	@${RM} ${WRKSRC}/lib/Alarm/Concurrent.pm.orig

.include <bsd.port.mk>
