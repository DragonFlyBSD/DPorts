# $FreeBSD: www/p5-Template-Plugin-VMethods/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Plugin-VMethods
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Install vmethods for Template-Toolkit

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Template-Toolkit>0:${PORTSDIR}/www/p5-Template-Toolkit

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Plugin::VMethods.3

NO_STAGE=	yes
.include <bsd.port.mk>
