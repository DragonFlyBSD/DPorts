# New ports collection makefile for:	p5-Net-SMS-Clickatell
# Date created:		2010-12-01
# Whom:			John Bayly <freebsd.ports@tipstrade.net>
#
# $FreeBSD: ports/net/p5-Net-SMS-Clickatell/Makefile,v 1.3 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-SMS-Clickatell
PORTVERSION=	0.05
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd.ports@tipstrade.net
COMMENT=	Access to Clickatell SMS messaging service

TEST_DEPENDS=	p5-libwww>=5.816:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=		Net::SMS::Clickatell.3

post-patch:
	${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
