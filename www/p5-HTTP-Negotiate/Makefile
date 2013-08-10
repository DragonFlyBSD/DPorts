# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-Negotiate/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTTP-Negotiate
PORTVERSION=	6.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of the HTTP content negotiation algorithm

BUILD_DEPENDS=	p5-HTTP-Message>=6:${PORTSDIR}/www/p5-HTTP-Message
RUN_DEPENDS=	p5-HTTP-Message>=6:${PORTSDIR}/www/p5-HTTP-Message

CONFLICTS=	p5-libwww-5*

USES=		perl5
USE_PERL5=	configure

MAN3=		HTTP::Negotiate.3

.include <bsd.port.mk>
