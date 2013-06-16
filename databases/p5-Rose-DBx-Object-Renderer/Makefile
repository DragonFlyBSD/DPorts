# Created by: Wen Heping
# $FreeBSD: databases/p5-Rose-DBx-Object-Renderer/Makefile 320083 2013-06-06 11:08:34Z mat $

PORTNAME=	Rose-DBx-Object-Renderer
PORTVERSION=	0.77
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Web UI Rendering for Rose::DB::Object

RUN_DEPENDS=	p5-Rose-DBx-Object-MoreHelpers>=0:${PORTSDIR}/databases/p5-Rose-DBx-Object-MoreHelpers \
		p5-CGI-FormBuilder>=3.05:${PORTSDIR}/www/p5-CGI-FormBuilder \
		p5-File-Copy-Recursive>0:${PORTSDIR}/devel/p5-File-Copy-Recursive \
		p5-Lingua-EN-Inflect>0:${PORTSDIR}/textproc/p5-Lingua-EN-Inflect \
		p5-Template-Toolkit>0:${PORTSDIR}/www/p5-Template-Toolkit
BUILD_DEPENDS:=	${RUN_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

PERL_CONFIGURE=	yes

MAN3=		Rose::DBx::Object::Renderer.3

.include <bsd.port.mk>
