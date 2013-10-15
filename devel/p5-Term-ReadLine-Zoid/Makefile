# Created by: ijliao
# $FreeBSD: devel/p5-Term-ReadLine-Zoid/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Term-ReadLine-Zoid
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN \
		http://zoidberg.student.utwente.nl/downloads/Term-ReadLine-Zoid/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides an interactive input buffer written in plain PERL

BUILD_DEPENDS=	p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=	Term::ReadLine::Zoid.3 \
	Term::ReadLine::Zoid::Base.3 \
	Term::ReadLine::Zoid::Emacs.3 \
	Term::ReadLine::Zoid::FileBrowse.3 \
	Term::ReadLine::Zoid::ISearch.3 \
	Term::ReadLine::Zoid::ViCommand.3

NO_STAGE=	yes
.include <bsd.port.mk>
