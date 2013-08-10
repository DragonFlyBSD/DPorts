# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-Daemon/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTTP-Daemon
PORTVERSION=	6.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple HTTP server class

BUILD_DEPENDS=	p5-HTTP-Date>=6:${PORTSDIR}/www/p5-HTTP-Date \
		p5-HTTP-Message>=6:${PORTSDIR}/www/p5-HTTP-Message \
		p5-LWP-MediaTypes>=6:${PORTSDIR}/www/p5-LWP-MediaTypes
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS=	p5-libwww-5*

USES=		perl5
USE_PERL5=	configure

MAN3=		HTTP::Daemon.3

.include <bsd.port.mk>
