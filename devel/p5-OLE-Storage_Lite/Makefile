# Created by: Jason Portwood <jason@iac.net>
# $FreeBSD: devel/p5-OLE-Storage_Lite/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
