# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-File-Find-Object/Makefile 319240 2013-05-27 13:33:21Z jadawin $

PORTNAME=	File-Find-Object
PORTVERSION=	0.2.7
DISTVERSIONPREFIX=v
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object oriented File::Find replacement

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-XSAccessor>=0:${PORTSDIR}/devel/p5-Class-XSAccessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		File::Find::Object.3 \
		File::Find::Object::Base.3 \
		File::Find::Object::PathComp.3 \
		File::Find::Object::Result.3

.include <bsd.port.mk>
