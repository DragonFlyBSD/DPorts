# $FreeBSD: devel/p5-Module-Install-AuthorRequires/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Module-Install-AuthorRequires
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to declare author-only dependencies

RUN_DEPENDS=	\
	p5-Module-Install>0:${PORTSDIR}/devel/p5-Module-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Module::Install::AuthorRequires.3

NO_STAGE=	yes
.include <bsd.port.mk>
