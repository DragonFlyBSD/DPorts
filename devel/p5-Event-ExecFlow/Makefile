# Created by: chinsan
# $FreeBSD: devel/p5-Event-ExecFlow/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Event-ExecFlow
PORTVERSION=	0.64
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	API for complex flow controls with asynchronous execution of external programs

BUILD_DEPENDS=	p5-AnyEvent>=0:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Locale-libintl>=0:${PORTSDIR}/devel/p5-Locale-libintl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Event::ExecFlow::Job::Code.3 Event::ExecFlow::Frontend.3 \
		Event::ExecFlow::Job::Group.3 \
		Event::ExecFlow::Scheduler::SimpleMax.3 \
		Event::ExecFlow::Scheduler.3 Event::ExecFlow::Job.3 \
		Event::ExecFlow::Callbacks.3 Event::ExecFlow::Job::Command.3 \
		Event::ExecFlow.3

.include <bsd.port.mk>
