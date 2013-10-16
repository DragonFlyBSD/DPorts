# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: www/p5-Data-TreeDumper-Renderer-DHTML/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Data-TreeDumper-Renderer-DHTML
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DHTML renderer for Data::TreeDumper

BUILD_DEPENDS=	p5-Data-TreeDumper>=0:${PORTSDIR}/devel/p5-Data-TreeDumper
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Data::TreeDumper::Renderer::DHTML.3

NO_STAGE=	yes
.include <bsd.port.mk>
