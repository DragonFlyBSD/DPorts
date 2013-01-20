# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Config-AutoConf/Makefile,v 1.11 2012/12/31 17:46:31 svnexp Exp $

PORTNAME=	Config-AutoConf
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to implement some of AutoConf macros

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Capture-Tiny>=0:${PORTSDIR}/devel/p5-Capture-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Config::AutoConf.3

.include <bsd.port.mk>
