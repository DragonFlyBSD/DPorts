# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: databases/p5-POE-Component-DBIAgent/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	POE-Component-DBIAgent
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component for running asynchronous DBI calls

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-Class-MethodMaker>=0:${PORTSDIR}/devel/p5-Class-MethodMaker \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Component::DBIAgent.3 POE::Component::DBIAgent::Helper.3 \
		POE::Component::DBIAgent::Queue.3

.include <bsd.port.mk>
