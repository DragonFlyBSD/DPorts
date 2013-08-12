# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Filter-Template/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Filter-Template
PORTVERSION=	1.040
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

.include <bsd.port.mk>
