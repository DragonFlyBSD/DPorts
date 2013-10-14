# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Class-Handle/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Handle
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create objects that are handles to classes

RUN_DEPENDS=	p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA \
		p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
BUILD_DEPENDS=	p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA \
		p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Handle.3

NO_STAGE=	yes
.include <bsd.port.mk>
