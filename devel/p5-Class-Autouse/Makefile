# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Class-Autouse/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-Autouse
PORTVERSION=	2.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ADAMK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Defer loading of one or more classes

BUILD_DEPENDS=	p5-prefork>=0:${PORTSDIR}/devel/p5-prefork
RUN_DEPENDS=	p5-prefork>=0:${PORTSDIR}/devel/p5-prefork

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Autouse.3

.include <bsd.port.mk>
