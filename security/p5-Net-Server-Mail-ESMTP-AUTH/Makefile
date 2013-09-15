# Created by: Zane C. Bowers <vvelox@vvelox.net>
# $FreeBSD: security/p5-Net-Server-Mail-ESMTP-AUTH/Makefile 326999 2013-09-11 18:03:40Z az $

PORTNAME=	Net-Server-Mail-ESMTP-AUTH
PORTVERSION=	0.1
CATEGORIES=	security mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Plain and login auth methods for Net::Server::Mail::ESMTP

BUILD_DEPENDS=	p5-Net-Server-Mail>=0:${PORTSDIR}/mail/p5-Net-Server-Mail \
		p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Server::Mail::ESMTP::AUTH.3

.include <bsd.port.mk>
