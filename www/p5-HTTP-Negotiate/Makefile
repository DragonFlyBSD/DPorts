# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Negotiate/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	HTTP-Negotiate
PORTVERSION=	6.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of the HTTP content negotiation algorithm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTTP-Message>=6:www/p5-HTTP-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
