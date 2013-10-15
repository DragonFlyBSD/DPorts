# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Filter-Template/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Filter-Template
PORTVERSION=	1.043
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Source filter for inline code templates (macros)

BUILD_DEPENDS=	p5-Filter>=0:${PORTSDIR}/devel/p5-Filter
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Filter::Template.3 Filter::Template::UseBytes.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
