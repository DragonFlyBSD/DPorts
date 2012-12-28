# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: ports/devel/p5-Devel-NYTProf/Makefile,v 1.19 2012/12/16 06:16:54 svnexp Exp $

PORTNAME=	Devel-NYTProf
PORTVERSION=	4.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Powerful feature-rich perl source code profiler

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON-Any>=0:${PORTSDIR}/converters/p5-JSON-Any
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=	nytprofhtml.1 \
	nytprofcsv.1 \
	nytprofcg.1 \
	nytprofmerge.1

MAN3=	Devel::NYTProf.3 \
	Devel::NYTProf::Apache.3 \
	Devel::NYTProf::Core.3 \
	Devel::NYTProf::Data.3 \
	Devel::NYTProf::FileInfo.3 \
	Devel::NYTProf::ReadStream.3 \
	Devel::NYTProf::Run.3 \
	Devel::NYTProf::Util.3

.include <bsd.port.mk>
