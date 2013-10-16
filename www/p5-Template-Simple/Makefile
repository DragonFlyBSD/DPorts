# Created by: Ken McGlothlen <ken.mcglothlen@gmail.com>
# $FreeBSD: www/p5-Template-Simple/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Simple
PORTVERSION=	0.06
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ken.mcglothlen@gmail.com
COMMENT=	Template::Simple (a very fast templating module)

LICENSE=	ART20

BUILD_DEPENDS=	p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Template::Simple.3

NO_STAGE=	yes
.include <bsd.port.mk>
