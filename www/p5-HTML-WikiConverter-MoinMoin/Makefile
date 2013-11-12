# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/p5-HTML-WikiConverter-MoinMoin/Makefile 332678 2013-11-04 09:57:54Z az $

PORTNAME=	HTML-WikiConverter-MoinMoin
PORTVERSION=	0.54
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert HTML to MoinMoin markup

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-WikiConverter>=0.60:${PORTSDIR}/www/p5-HTML-WikiConverter \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
