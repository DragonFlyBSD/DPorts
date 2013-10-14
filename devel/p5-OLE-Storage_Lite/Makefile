# Created by: Jason Portwood <jason@iac.net>
# $FreeBSD: devel/p5-OLE-Storage_Lite/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	OLE-Storage_Lite
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for OLE document interface

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		OLE::Storage_Lite.3

NO_STAGE=	yes
.include <bsd.port.mk>
