-------- EventFlow: TwnObj_HyruleCastleBook_A_02 --------

Actor: TwnObj_HyruleCastleBook_A_02
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event1:
    TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_00'})
    if !EventSystemActor.GeneralChoice3() {
        Event3:
        TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_01'})
        if !EventSystemActor.GeneralChoice3() {
            Event5:
            TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_02'})
            if !EventSystemActor.GeneralChoice3() {
                Event7:
                TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_03'})
                if !EventSystemActor.GeneralChoice3() {
                    Event9:
                    TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_04'})
                    if !EventSystemActor.GeneralChoice3() {
                        Event11:
                        TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_05'})
                        if !EventSystemActor.GeneralChoice3() {
                            Event13:
                            TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_06'})
                            if !EventSystemActor.GeneralChoice3() {
                                Event15:
                                TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_07'})
                                if !EventSystemActor.GeneralChoice3() {
                                    Event17:
                                    TwnObj_HyruleCastleBook_A_02.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/TwnObj_HyruleCastleBook_A_02:Diary_08'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event15
                                    }
                                } else {
                                    goto Event13
                                }
                            } else {
                                goto Event11
                            }
                        } else {
                            goto Event9
                        }
                    } else {
                        goto Event7
                    }
                } else {
                    goto Event5
                }
            } else {
                goto Event3
            }
        } else {
            goto Event1
        }
    } else {
        goto Event17
    }
}
