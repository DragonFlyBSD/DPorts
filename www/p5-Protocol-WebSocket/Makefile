# Created by: Stefan `Sec` Zehl <sec@42.org>
# $FreeBSD: www/p5-Protocol-WebSocket/Makefile 338778 2014-01-05 14:02:22Z az $

PORTNAME=	Protocol-WebSocket
PORTVERSION=	0.00906
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VTI
PKGNAMEPREFIX=	p5-

MAINTAINER=	sec@42.org
COMMENT=	Client/server WebSocket message and frame parser/constructor

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
