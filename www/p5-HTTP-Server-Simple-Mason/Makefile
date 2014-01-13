# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-Server-Simple-Mason/Makefile 338767 2014-01-05 13:23:32Z az $

PORTNAME=	HTTP-Server-Simple-Mason
PORTVERSION=	0.14
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	An abstract baseclass for a standalone mason server

BUILD_DEPENDS=	p5-HTTP-Server-Simple>=0:${PORTSDIR}/www/p5-HTTP-Server-Simple \
		p5-HTML-Mason>=0:${PORTSDIR}/www/p5-HTML-Mason \
		p5-Hook-LexWrap>=0:${PORTSDIR}/devel/p5-Hook-LexWrap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
